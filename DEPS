vars = {
  'chromium_git': 'https://chromium.googlesource.com',
}

deps = {
  'buildtools':
      Var('chromium_git') + '/chromium/src/buildtools.git@' +
          'c2e4795660817c2776dbabd778b92ed58c074032',

  'third_party/googletest/src':
      Var('chromium_git') + '/external/github.com/google/googletest.git@' +
          'af29db7ec28d6df1c7f0f745186884091e602e07',

  'third_party/mini_chromium/src':
      Var('chromium_git') + '/chromium/mini_chromium@' +
          '5654edb4225bcad13901155c819febb5748e502b',
}

hooks = [
  {
    'name': 'clang_format_mac_x64',
    'pattern': '.',
    'condition': 'host_os == "mac" and host_cpu == "x64"',
    'action': [
      'download_from_google_storage',
      '--no_resume',
      '--no_auth',
      '--bucket', 'chromium-clang-format',
      '-s', 'buildtools/mac/clang-format.x64.sha1',
      '-o', 'buildtools/mac/clang-format',
    ],
  },
  {
    'name': 'clang_format_mac_arm64',
    'pattern': '.',
    'condition': 'host_os == "mac" and host_cpu == "arm64"',
    'action': [
      'download_from_google_storage',
      '--no_resume',
      '--no_auth',
      '--bucket', 'chromium-clang-format',
      '-s', 'buildtools/mac/clang-format.arm64.sha1',
      '-o', 'buildtools/mac/clang-format',
    ],
  },
  {
    'name': 'clang_format_linux',
    'pattern': '.',
    'condition': 'host_os == "linux"',
    'action': [
      'download_from_google_storage',
      '--no_resume',
      '--no_auth',
      '--bucket', 'chromium-clang-format',
      '-s', 'buildtools/linux64/clang-format.sha1',
    ],
  },
]

recursedeps = [
  'buildtools',
]
