vars = {
  'chromium_git': 'https://chromium.googlesource.com',
}

deps = {
  'buildtools':
      Var('chromium_git') + '/chromium/buildtools.git@' +
          '0e1cbc4eab6861b0c84bf2ed9a3c4b7aa2063819',

  'third_party/googletest/src':
      Var('chromium_git') + '/external/github.com/google/googletest.git@' +
          '879ac092fde0a19e1b3a61b2546b2a422b1528bc',

  'third_party/mini_chromium/src':
      Var('chromium_git') + '/chromium/mini_chromium@' +
          'f701716d9546c00725eec4302a601796417fecef',
}

hooks = [
  {
    'name': 'clang_format_mac',
    'pattern': '.',
    'condition': 'host_os == "mac"',
    'action': [
      'download_from_google_storage',
      '--no_resume',
      '--no_auth',
      '--bucket=chromium-clang-format',
      '--sha1_file',
      'buildtools/mac/clang-format.sha1',
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
      '--bucket=chromium-clang-format',
      '--sha1_file',
      'buildtools/linux64/clang-format.sha1',
    ],
  },
  {
    'name': 'gn_mac',
    'pattern': '.',
    'condition': 'host_os == "mac"',
    'action': [
      'download_from_google_storage',
      '--no_resume',
      '--no_auth',
      '--bucket', 'chromium-gn',
      '-s', 'buildtools/mac/gn.sha1',
    ],
  },
  {
    'name': 'gn_linux64',
    'pattern': '.',
    'condition': 'host_os == "linux"',
    'action': [
      'download_from_google_storage',
      '--no_resume',
      '--no_auth',
      '--bucket', 'chromium-gn',
      '-s', 'buildtools/linux64/gn.sha1',
    ],
  },
]

recursedeps = [
  'buildtools',
]
