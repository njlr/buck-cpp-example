cxx_binary(
  name = 'demo',
  header_namespace = 'demo',
  headers = subdir_glob([
    ('demo/include', '**/*.hpp'),
  ]),
  srcs = glob([
    'demo/src/**/*.cpp',
  ]),
  deps = [
    '//mathutils:mathutils',
  ],
)
