if with_platform_android
  inc_android_headers = include_directories('include')

  files_libgfxstream_android = files(
    'ANativeWindowAndroid.cpp',
    'ANativeWindowEmulated.cpp',
    'GfxStreamGralloc.cpp',
    'GrallocEmulated.cpp',
    'GrallocGoldfish.cpp',
    'GrallocMinigbm.cpp',
  )

  libgfxstream_android = static_library(
     'gfxstream_android',
     files_libgfxstream_android,
     cpp_args: gfxstream_guest_args,
     dependencies : [dep_android],
     include_directories: [inc_android_headers, inc_guest_iostream,
                           inc_guest_iostream, inc_goldfish_address_space,
                           inc_platform_virtgpu, inc_src, inc_aemu, inc_include],
     link_with: [lib_goldfish_address_space, libplatform_virtgpu]
)
endif
