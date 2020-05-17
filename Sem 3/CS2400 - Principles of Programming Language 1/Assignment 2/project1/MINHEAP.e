note
	description: "Summary description for {MINHEAP}."
	author: "Venkata Sai Mahesh"
	date: "$19/11/2019$"
	revision: "$Revision$"

class
	MINHEAP
inherit
	ARGUMENTS_32

create
	build

feature  -- Initialization
		heap_array:ARRAY[INTEGER]				--for heap array
		heap_size:INTEGER						--for heap size

	build(num:ARRAY[INTEGER];length:INTEGER)	--build function which build heap in heap_array
		require
			length/=0
		local
			i:INTEGER
		do
			heap_size:=0
			create heap_array.make_filled (0, 1, length)
			from
				i:=1
			invariant length>0
			until
				i>length
			loop
				insert(num[i],i)				--using William's method
				i:=i+1
				variant length-i+1
			end
			ensure length>0
		end

	insert(a:INTEGER;i:INTEGER)
	require
		i>0
		do
			heap_size:=heap_size+1				--increasing size by 1 as 1 element is added
			heap_array[i]:=a					--inserting element a at index i
			heapifyUp(i)						--heapifing Upward from the current position
			ensure
				heap_size>0
		end

	heapifyUp(index:INTEGER)
	require
		index>0
		local
			val:INTEGER
		do
			if
				index/=1 and heap_array[index]<heap_array[index//2] --if value of element is less than parent element
			then													--swap element with parent element
			val:=heap_array[index]
			heap_array[index]:=heap_array[index//2]
			heap_array[index//2]:=val
			heapifyUp(index//2)										--heapify parent
			end
			ensure
				index>0
		end

	size:INTEGER
		require
			heap_size>=0
		do
			Result:=heap_size					--return the value of heap_size
			ensure
				Result=heap_size
		end

	peek:INTEGER
		require
			heap_size>0
		do
			Result:=heap_array[1]				--return the first element in the heap
			ensure
				Result=heap_array[1]
		end

	remove
		require
			heap_size>0
		do
			heap_array[1]:=heap_array[size]		--assign first element with last
			heap_size:=heap_size-1				--decrease the heap size by 1 as 1 element is removed
			heapifyDown(heap_array,1,size)		--heapify Downward at position 1
			ensure
			heap_size>=0 and size>=0
		end


	heapifyDown(sorted:ARRAY[INTEGER];index:INTEGER;length:INTEGER)
		require
			length>=0
		local
			smallest:INTEGER
			l:INTEGER
			r:INTEGER
			val:INTEGER
		do
			smallest:=index						--index where the current element has to be placed
			l:=2*index							--left child element in the heap
			r:=2*index+1						--right child element in the heap
			if
				l<length+1 and sorted[l]<sorted[smallest] --if left child is less than parent
			then
				smallest:=l						--change the smallest to the left child
			end
			if
				r<length+1 and sorted[r]<sorted[smallest]--if right child is less than parent
			then
				smallest:=r						--change the smallest to the right child
			end

			if
				smallest/=index					--check if the above tasks has changest the value of current index
			then								--swap the position with the index
				val:=sorted[index]
				sorted[index]:=sorted[smallest]
				sorted[smallest]:=val
				heapifyDown(sorted,smallest,length)
			end
			ensure
				length>=0
		end
end
