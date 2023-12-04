cc_library(
    name = "lib-greet",
    srcs = ["greet.cpp"],
    hdrs = ["greet.h"],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":lib-greet",
    ],
)