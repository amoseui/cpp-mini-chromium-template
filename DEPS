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

  'buildtools/mac-format': {
    'bucket': 'chromium-clang-format',
    'condition': 'host_os == "mac" and host_cpu == "x64"',
    'dep_type': 'gcs',
    'objects': [
      {
        'object_name': '0b4bd257a1f4cd27d27d6919b0f9e52ecdfa8f1e',
        'sha256sum': '0f3c38a6af0a04fd4161f1948f02e83a8827727e77242d3b5b61ae4f009a270a',
        'size_bytes': 2869976,
        'generation': 1699478821342910,
        'output_file': 'clang-format',
      },
    ],
  },

  'buildtools/mac_arm64-format': {
    'bucket': 'chromium-clang-format',
    'condition': 'host_os == "mac" and host_cpu == "arm64"',
    'dep_type': 'gcs',
    'objects': [
      {
        'object_name': '96c34e77259c4cc1fc7bdf067fc058bfd341ab85',
        'sha256sum': '66c5243cd530702defcbe18dffdbed0da9a3d1474b158a949580f6d269fbac17',
        'size_bytes': 2847744,
        'generation': 1699478828600976,
        'output_file': 'clang-format',
      },
    ],
  },

  'buildtools/linux64-format': {
    'bucket': 'chromium-clang-format',
    'condition': 'host_os == "linux"',
    'dep_type': 'gcs',
    'objects': [
      {
        'object_name': 'b42097ca924d1f1736a5a7806068fed9d7345eb4',
        'sha256sum': '82df59a7d4390892c3eeaf0c8bf626e2869f1138a6ad3eb90dd51da0011ba630',
        'size_bytes': 3539912,
        'generation': 1699478806427152,
        'output_file': 'clang-format',
      },
    ],
  },
}

recursedeps = [
  'buildtools',
]
