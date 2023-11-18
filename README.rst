Array helper classes and functions
==================================

.. image:: https://img.shields.io/github/last-commit/jfjlaros/array-helpers.svg
   :target: https://github.com/jfjlaros/array-helpers/graphs/commit-activity
.. image:: https://github.com/jfjlaros/array-helpers/actions/workflows/arduino-package.yml/badge.svg
   :target: https://github.com/jfjlaros/array-helpers/actions/workflows/arduino-package.yml
.. image:: https://readthedocs.org/projects/simplerpc/badge/?version=latest
   :target: https://array-helpers.readthedocs.io/en/latest
.. image:: https://img.shields.io/github/release-date/jfjlaros/array-helpers.svg
   :target: https://github.com/jfjlaros/array-helpers/releases
.. image:: https://img.shields.io/github/release/jfjlaros/array-helpers.svg
   :target: https://github.com/jfjlaros/array-helpers/releases
.. image:: https://www.ardu-badge.com/badge/array-helpers.svg
   :target: https://www.ardu-badge.com/array-helpers
.. image:: https://img.shields.io/github/languages/code-size/jfjlaros/array-helpers.svg
   :target: https://github.com/jfjlaros/array-helpers
.. image:: https://img.shields.io/github/languages/count/jfjlaros/array-helpers.svg
   :target: https://github.com/jfjlaros/array-helpers
.. image:: https://img.shields.io/github/languages/top/jfjlaros/array-helpers.svg
   :target: https://github.com/jfjlaros/array-helpers
.. image:: https://img.shields.io/github/license/jfjlaros/array-helpers.svg
   :target: https://raw.githubusercontent.com/jfjlaros/array-helpers/master/LICENSE.md

----

This library provides a number of helper classes and functions to ease working
with arrays.


**Features:**

- ``arraySize`` -- replacement for ``std::size`` [1_].
- ``Span`` -- replacement for ``std::span`` [2_].

Please note that most if not all of these features will become obsolete once
the Arduino tool chain migrates to C++20.

.. _1: https://en.cppreference.com/w/cpp/iterator/size
.. _2: https://en.cppreference.com/w/cpp/container/span
