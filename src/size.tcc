#pragma once

template <class T, size_t n>
size_t arraySize(T const (&)[n]) {
  return n;
}
