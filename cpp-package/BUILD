load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "greetings",
    srcs = ["src/greetings.cpp"],
    hdrs = ["include/greetings.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "greetings_test",
    size = "small",
    srcs = ["test/greetings_test.cpp"],
    deps = [
        "//cpp-package:greetings",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)