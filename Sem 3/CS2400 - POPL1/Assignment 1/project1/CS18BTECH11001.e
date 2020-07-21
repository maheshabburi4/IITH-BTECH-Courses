note
	description: "Chinese Remainder Theoream root class"
	Author: "Venkata Sai Mahesh"
	date: "$19/11/2019$"
	revision: "$Revision$"

class
	CS18BTECH11001

inherit
	ARGUMENTS_32

create
	make

feature {NONE}
	 i_file: PLAIN_TEXT_FILE	--input file
	 o_file:PLAIN_TEXT_FILE		--output file
 	 size: INTEGER			--no.of numbers
	 num:ARRAY[INTEGER]		--for numbers
	 rem:ARRAY[INTEGER]		--for remainders
	 res:INTEGER			--for result
	 i:INTEGER
	make
			-- Run application.
		do
			create i_file.make_open_read ("input.txt")
			create o_file.make_open_write("output.txt")
      		i_file.read_integer
      		size:=i_file.last_integer
      		create num.make_filled (0, 1, size)
      		create rem.make_filled (0, 1, size)
      		from
      			i:=1
      		invariant size>0
      		until
      			i>size
      		loop
      			i_file.read_integer
      			num[i]:=i_file.last_integer	--assigning read integer to number array
      			i_file.read_integer
      			rem[i]:=i_file.last_integer	--assigning read integer to remainder array
      			i:=i+1
      			variant size-i+1
      		end
      		i_file.close
      		res:=minX			--assigning returned value from minX function
      		o_file.put_integer(res)		--printing result to output file
      		--print(res.out)
      			rescue			--incase any contracts violated
      				create o_file.make_open_write("output.txt")
					o_file.put_string("INVALID")
					--print("INVALID")
		end

	inv(a0:INTEGER;m1:INTEGER):INTEGER	--inverse function
		require
			m1/=1			--else loop runs infinite
		local
			m0:INTEGER
			t:INTEGER
			q:INTEGER
			x0:INTEGER
			x1:INTEGER
			a:INTEGER
			m:INTEGER
		do
			m0:=m1
			x0:=0
			x1:=1
			a:=a0
			m:=m1
			from			--euclid's algorithm

			until
				a<=1
			loop
				q:=a//m
				t:=m
				m:=a\\m
				a:=t
				t:=x0
				x0:=x1-q*x0
				x1:=t
			end

			if
				x1<0
			then
				x1:=x1+m0	--since the required answer should be positive
			end

			Result:=x1
		end

	minX :INTEGER
		require
			pairwise_coprime=TRUE and rem_gt_num=TRUE	--else we can't say that a number x exist satisfing x%num[i]=rem[i] for all i
		local
			x:INTEGER
			temp:INTEGER
			pp:INTEGER
		do
			x:=1
			temp:=0
			from
				i:=1
			invariant size>0
			until
				i>size
			loop
				x:=x*num[i]		--calculating product of all numbers
				i:=i+1
				variant size-i+1
			end

			from
				i:=1
			invariant size>0
			until
				i>size
			loop
				pp:=x//num[i]
				temp:=temp+(rem[i]*inv(pp,num[i])*pp)
				i:=i+1
				variant size-i+1
			end

			Result:=(temp\\x)		--as result must be smallest
			ensure
				valid_output(Result)=TRUE
		end

	pairwise_coprime:BOOLEAN
		require
			size>0
		local
			j:INTEGER
			val:BOOLEAN
		do
			val:=TRUE
			from
				i:=1
			invariant size>0
			until
				i>=size
			loop
				from
					j:=i+1
				invariant size>0
				until
					j>size
				loop
					if
						gcd(num[i],num[j])/=1 and val=TRUE	--checking gcd of all pairs of numbers is 1 or not
					then
						val:=FALSE
					end
					j:=j+1
					variant size-j+1
				end
				i:=i+1
				variant size-i+1
			end
			Result:=val
		end

	gcd(x:INTEGER;y:INTEGER):INTEGER
		require
			x>=0
		do
			if y = 0 then
				Result := x
			else
				Result := gcd (y, x \\ y);
			end
		end

	rem_gt_num:BOOLEAN
		local
			val:BOOLEAN
		do
			val:=TRUE
			from
				i:=1
			invariant size>0
			until
				i>size
			loop
				if
					((rem[i]<0 or rem[i]>=num[i])or(num[i]<2)) and val=TRUE		--checking 0<=a<n and n>1 for all numbers and remainders
				then
					val:=FALSE
				end
				i:=i+1
				variant size-i+1
			end
			Result:=val
		end

	valid_output(temp:INTEGER):BOOLEAN
		require
			temp>1
		local
			value:BOOLEAN
		do
			value:=TRUE
			from
				i:=1
			invariant size>0
			until
				i>size
			loop
				if
					temp\\num[i]/=rem[i] and value=TRUE			--checking final result satisfy result%n=a for all numbers
				then
					value:=FALSE
				end
				i:=i+1
				variant size-i+1
			end
			Result:=value
		end
invariant size>0		--as size shouldn't change all over the class
end
