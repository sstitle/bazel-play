load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

filegroup(
    name = "all_srcs",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"],
)

cmake(
    name = "cgal-lib",
    lib_source = ":all_srcs",
    out_headers_only = True,
    visibility = ["//visibility:public"],
)

