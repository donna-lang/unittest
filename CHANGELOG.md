# Changelog

All notable changes to `unittest` will be documented in this file.

## [0.1.0] — 2026-05-07

Initial release.

### Added

- `should.equal_int` / `should.not_equal_int` — integer equality assertions
- `should.equal` — alias for `equal_int` for compatibility
- `should.equal_string` / `should.not_equal_string` — string equality assertions
- `should.is_empty_string` / `should.not_empty_string` — string emptiness assertions
- `should.contains_string` / `should.not_contains_string` — substring assertions
- `should.starts_with` / `should.ends_with` — string prefix/suffix assertions
- `should.equal_bool` / `should.not_equal_bool` — boolean equality assertions
- `should.is_true` / `should.is_false` — boolean predicate assertions
- `should.be_true` / `should.be_false` — integer-as-bool assertions
- `should.equal_float` — exact float equality via C FFI
- `should.near_float` — approximate float equality with tolerance
- `should.is_empty_list` / `should.not_empty_list` — list emptiness assertions
- `should.length_list` — list length assertion
- `should.contains_int` / `should.contains_string_value` — list membership assertions
- `should.all` — combine multiple assertion results, ignore passing ones
- `should.pass` — explicit passing assertion
- `should.fail` — explicit failure with a message
- `should.because` — attach context to a failing assertion
