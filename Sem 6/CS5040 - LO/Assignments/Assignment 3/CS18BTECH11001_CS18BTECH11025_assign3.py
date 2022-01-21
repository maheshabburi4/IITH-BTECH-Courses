"""
Assignment - 1
Team Members:
    Sai Mahesh  - CS18BTECH11001
    Sai Krishna - CS18BTECH11025
"""

import numpy as np

EPS = 1e-6


def is_degenerate(A, B, C):
    # Get any feasible point for the given configuration
    X = get_feasible_point(A, B, C)

    # Find number of rows satisfied by X with equality
    equality_indices = np.where(np.abs(np.dot(A, X)-B) < EPS)[0]

    # If number of rows is not equal to number of variables
    # It is degenerate(no unique solution)
    if len(equality_indices) == A.shape[1]:
        return False
    return True


def make_non_degenerate(A, B, C):
    # Consider the last m - n rows of B vector
    # Add a very small random value to these rows
    # such that they doesn't satisfy the equality condition(AX = B)
    # and hence can get unique feasible point(point satisfying only the first n independent rows)
    # Try it until unique feasible point is possible

    # last m - n rows
    rows_to_be_modified = A.shape[0]-A.shape[1]

    num_iter = 0
    while True:
        if(num_iter < 1000):
            num_iter += 1

            # add a small random value to each of these rows
            temp_B = B
            temp_B[:rows_to_be_modified] += np.random.uniform(
                EPS, EPS*10, size=rows_to_be_modified)
        else:
            # add a small random value to each of these rows
            temp_B = B
            temp_B[:rows_to_be_modified] += np.random.uniform(
                0.1, 10, size=rows_to_be_modified)

        # If degeneracy is removed, Exit
        if not is_degenerate(A, temp_B, C):
            print('Degeneracy removed')
            break
    return A, temp_B, C


def get_feasible_point(A, B, C):
    # if every element in B is greater than zero,
    # then origin is a feasible point
    if np.all((B >= 0)):
        return np.zeros(C.shape)
    else:
        for _ in range(50):
            # consider any random n of m constraints
            m = A.shape[0]
            n = A.shape[1]
            random_indices = np.random.choice(m, n)
            random_A = A[random_indices]
            random_B = B[random_indices]
            try:
                # Find Equality Solution for this n constraints
                possible_X = np.dot(np.linalg.inv(random_A), random_B)

                # If the calculated X is satisfying all of the constraint
                if (np.all((np.dot(A, possible_X) - B <= 0))):
                    return possible_X
                else:
                    continue
            # If the considered random constraints matrix is not invertible
            # try next time
            except:
                pass


def get_neighbour(A, B, C, X):
    # Get direction vectors of vertex X
    Z = get_direction(A, B, C, X)

    # Find costs through these directions
    costs = np.dot(Z, C)

    # Find Directions with positive costs
    positive_cost_directions = np.where(costs > 0)[0]

    # If there are no more positive cost directions available
    # the present vertex is optimal
    if len(positive_cost_directions) == 0:
        return None
    else:
        # Consider positive cost direction vector
        v = Z[positive_cost_directions[0]]

        # If there is no bound in the present direction
        if len(np.where(np.dot(A, v) > 0)[0]) == 0:
            print('Given LP is Unbounded')
            exit()

        # Find A'' = Matrix of rows other than satisfied by X with equality
        # B'' = Corresponding B values of above rows
        equality_indices = np.where(np.abs(np.dot(A, X)-B) < EPS)[0]
        not_equality_indices = ~np.isin(np.arange(len(A)), equality_indices)
        not_equal_A = A[not_equality_indices]
        not_equal_B = B[not_equality_indices]

        # Find maximum t in feasible neighbour(X + tv)
        n = not_equal_B - np.dot(not_equal_A, X)
        d = np.dot(not_equal_A, v)
        n = n[np.where(d > 0)[0]]
        d = d[np.where(d > 0)[0]]
        s = n/d
        t = np.min(s[s >= 0])

        # Return the maximum feasible neighbour of X
        return X + t*v


def get_direction(A, B, C, X):
    # Find A' = Matrix of n linearly independent rows
    # which are satisfied by X with equality
    equality_indices = np.where(np.abs(np.dot(A, X)-B) < EPS)[0]
    A_bar = A[equality_indices]

    # Find Z = Matrix having direction vectors as columns
    Z = -np.linalg.inv(np.transpose(A_bar))

    return Z


def SimplexAlgorithm(A, B, C, X):
    while True:
        # Find neighbour with greater cost
        V = get_neighbour(A, B, C, X)

        # If the neighbour isn't available
        # the present vertex is the optimal
        # else move to neighbour
        if V is None:
            break
        else:
            X = V
    return X


def main():
    # Take input with tab spaces
    print('Enter C vector: ')
    C = np.asarray(list(map(float, input().split('\t'))))

    print('Enter B vector: ')
    B = np.asarray(list(map(float, input().split('\t'))))

    print('Enter A matrix: ')
    A = []
    for i in range(len(B)):
        A.append(np.asarray(list(map(float, input().split('\t')))))
    A = np.asarray(A)

    # Change Input to non degenerate
    A, B, C = make_non_degenerate(A, B, C)

    # Find the initial feasible point
    X = get_feasible_point(A, B, C)
    print('Initial Feasible Point: ', X)

    # Run Simplex Algorithm and find optimal solution
    X = SimplexAlgorithm(A, B, C, X)
    print('The Solution is :', X)
    print('The Maximum Value is: ', np.dot(C, X))


if __name__ == "__main__":
    main()
