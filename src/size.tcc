#pragma once

/*! Return the size of an arbitrary array.
 *
 * \param - Array reference.
 *
 * \return Array size.
 */
template <class T, size_t n>
size_t arraySize(T const (&)[n]) {
  return n;
}
