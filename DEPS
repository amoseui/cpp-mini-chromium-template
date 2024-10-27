vars = {
  'chromium_git': 'https://chromium.googlesource.com',

  # GN CIPD package version.
  'gn_version': 'git_revision:feafd1012a32c05ec6095f69ddc3850afb621f3a',

  # ninja CIPD package version.
  # https://chrome-infra-packages.appspot.com/p/infra/3pp/tools/ninja
  # This has to stay in sync with the version in src/third_party/ninja/README.chromium.
  'ninja_version': 'version:3@1.12.1.chromium.4',
}

allowed_hosts = [
  'chromium-clang-format',
]

deps = {
  'buildtools':
      Var('chromium_git') + '/chromium/src/buildtools.git@' +
          '9fba2b959007f7ef80990be4e940d98a692f7dd0',

  'buildtools/mac': {
    'packages': [
      {
        'package': 'gn/gn/mac-${{arch}}',
        'version': Var('gn_version'),
      }
    ],
    'dep_type': 'cipd',
    'condition': 'host_os == "mac"',
  },

  'buildtools/linux64': {
    'packages': [
      {
        'package': 'gn/gn/linux-amd64',
        'version': Var('gn_version'),
      }
    ],
    'dep_type': 'cipd',
    'condition': 'host_os == "linux"',
  },

  'third_party/googletest/src':
      Var('chromium_git') + '/external/github.com/google/googletest.git@' +
          'df1544bcee0c7ce35cd5ea0b3eb8cc81855a4140',

  'third_party/mini_chromium/src':
      Var('chromium_git') + '/chromium/mini_chromium@' +
          'c081fd005b09a59a505b09a4b506f8ba45f70859',

  'third_party/ninja': {
    'packages': [
      {
        'package': 'infra/3pp/tools/ninja/${{platform}}',
        'version': Var('ninja_version'),
      }
    ],
    'dep_type': 'cipd',
  },
}

recursedeps = [
  'buildtools',
]
