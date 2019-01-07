
project(darray)

aux_source_directory(. darray_SRCS)

file(GLOB darray_HEADS *.h)
if(darray_HEADS)
	set(darray_SRCS ${darray_SRCS} ${darray_HEADS})
endif()

add_executable(darray ${darray_SRCS})

