note
	description: "Heap Sort application root class"
	Author: "Venkata Sai Mahesh"
	date: "$19/11/2019$"
	revision: "$Revision$"

class
	CS18BTECH11001

create
	make

feature
	make
			-- Run application.
		local
			i_file:PLAIN_TEXT_FILE
			o_file:PLAIN_TEXT_FILE
			size:INTEGER
			i:INTEGER
			num: ARRAY[INTEGER]
			sort: ARRAY[INTEGER]		--for storing the elements after sorted
			str:STRING

		do
			create i_file.make_open_read ("input.txt")
			create o_file.make_open_write ("output.txt")
      		i_file.read_word			--reading word and taking input as string
      		str:=i_file.last_string
      		size:=str.to_integer		--converting string to integer
      		create num.make_filled (0, 1, size)	--initialising elements from 1 to size to 0
      		create sort.make_filled (0, 1, size)
      		from
      			i:=1
      		invariant size>0
      		until
      			i>size
      		loop
      			i_file.read_word		--reading word and taking input as string
      			str:=i_file.last_string
      			num[i]:=str.to_integer	--converting string to integer
      			i:=i+1
      			variant size-i+1
      		end
      		i_file.close
      		sort:=heapsort(num,size)	--calling heapsort function
      		from
      			i:=1
      		invariant size>0
      		until
      			i>size
      		loop
      			o_file.put_string(sort[i].out+" ")	--printing in the output file
      			--print (sort[i].out + " ")
      			i:=i+1
      			variant size-i+1
      		end
  	  		o_file.close
			rescue
				create o_file.make_open_write ("output.txt")
				o_file.put_string("INVALID")
				--print("INVALID")
		  end

	heapsort(num:ARRAY[INTEGER];size:INTEGER):ARRAY[INTEGER]
		require
			size>0
		local
			i:INTEGER
			sorted:ARRAY[INTEGER]
			heap : MINHEAP		--object for minheap class
		do
			create heap.build(num,size)		--calling build constructor of heap object of minheap class which creates heap in MINHEAP class
			create sorted.make_filled (0, 1, size)
			from
				i:=1
			invariant size>0
			until
				i>size
			loop
				sorted[i]:=heap.peek		--everytime extracting peek which gives min
				heap.remove					--after extracting removing peek from the heap
				i:=i+1
				variant size-i+1
			end
			Result:=sorted
		end
end
