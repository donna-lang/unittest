# unittest

<img src="https://img.shields.io/badge/Donna-unittest-FF6347?style=for-the-badge" alt="Donna unittest"/>

<a href="https://donna-lang.github.io/unittest/">
  <img src="https://img.shields.io/badge/Docs-Read-2F81F7?style=for-the-badge" alt="Docs - Read"/>
</a>

Test assertion helpers for the [Donna](https://github.com/donna-lang/donna) programming language.

## Overview

`unittest` provides readable, composable assertions for Donna's built-in test runner. Every assertion returns a `String` — an empty string means the test passed, any non-empty string is printed as the failure message.

The test runner discovers functions named `*_test` that return `String` and reports pass/fail automatically. No registration needed.

## Installation

Add to your `donna.toml` as a dev-dependency:

```toml
[dev-dependencies]
unittest = { git = "https://github.com/donna-lang/unittest", version = ">=0.1.0 and  <1.0.0" }
```

Then import the assertion module:

```donna
import unittest/should
```

## Quick start

```donna
import unittest/should

pub fn add_test() -> String:
  should.equal_int(1 + 1, 2)

pub fn greeting_test() -> String:
  should.equal_string("hello Donna", "hello Donna")

pub fn all_assertions_test() -> String:
  should.all([
    should.equal_int(2 + 2, 4),
    should.is_true(True),
    should.not_empty_string("Donna")
  ])
```

Run your tests:

```sh
donna test
```
## API

For API Reference visit the generated docs [here](https://donna-lang.github.io/unittest/)

## Failure messages

Failures print a clear expected/got diff:

```
    expected: 42
    got:      41
```

String failures quote the values:

```
    expected: "hello"
    got:      "hullo"
```

The `because` helper adds context when combining assertions:

```donna
should.because(should.equal_int(retries, 3), "checking retry count")
```
```
    because: checking retry count
    expected: 3
    got:      0
```

## Licence

MIT

