# libneoncl

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?style=flat-square)](https://opensource.org/licenses/MIT)
[![GitHub Workflow Status (with event)](https://img.shields.io/github/actions/workflow/status/neoncitylights/libneoncl/.github%2Fworkflows%2Fcmake-multi-platform.yml?style=flat-square&logo=github)](https://github.com/neoncitylights/libneoncl/actions/workflows/cmake-multi-platform.yml)

My personal library with a high-level, general-purpose API. At the moment, it focuses on working with UTF-8 strings and general text encoding/decoding, with plans to expand in different areas as necessary. The library is considered unstable and its API may change at any time.

## Platform support

libneoncl aims to support C11 at a minimum, and uses the latest stable version of CMake for the build system. It is tested against the latest stable version of Clang, GCC, and MSVC. At the time of writing, this includes Clang 17, GCC 13, and MSVC 19.

This library automatically compiles against the following in CI:

- [ ] `x86_64-apple-darwin`: 64-bit x86 architecture for Apple (Darwin) systems
- [x] `x86_64-pc-windows-msvc`: 64-bit x86 architecture for Windows with MSVC toolchain
- [x] `x86_64-pc-linux-gnu`: 64-bit x86 architecture for Linux with GNU toolchain
- [x] `aarch64-linux-gnu`: 64-bit ARM architecture for Linux with GNU toolchain

## License

This software is licensed under the MIT license ([`LICENSE`](./LICENSE) or <http://opensource.org/licenses/MIT>).

### Contribution

Unless you explicitly state otherwise, any contribution intentionally submitted for inclusion in the work by you, as defined in the MIT license, shall be licensed as above, without any additional terms or conditions.
