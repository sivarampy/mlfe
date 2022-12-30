# Build Libraries
set(LAFE_SOURCE_FILES
    lafe/MOps.cpp
    lafe/VOps.cpp
)

add_library(lafe ${LAFE_SOURCE_FILES})

target_include_directories(lafe PUBLIC ${PROJECT_SOURCE_DIR}/include)