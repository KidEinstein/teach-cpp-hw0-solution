project(logger)

set(HEADER_FILES logger.hpp)

set(SOURCE_FILES logger.cpp)

add_library(logger ${SOURCE_FILES} ${HEADER_FILES})
