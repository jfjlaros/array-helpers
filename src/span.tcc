#pragma once

/*! A limited implementation of std::span. */
template <class T>
class Span {
public:
  Span() = default;

  /*! Create a Span with `n` elements.
   *
   * \tparam n Number of elements.
   *
   * \param arr Array.
   */
  template <size_t n>
  Span(T (&arr)[n]);


  T& operator [](size_t const);
  T const& operator [](size_t const) const;


  T* begin();
  T* end();
  T const* begin() const;
  T const* end() const;


  /*! Get the underlying data.
   *
   * \return data.
   */
  T* data() const;

  /*! Get the number of elements.
   *
   * \return Span size.
   */
  size_t size() const;

private:
  T* arr_ {nullptr};
  size_t size_ {0};
};


template <class T>
template <size_t n>
Span<T>::Span(T (&arr)[n]) : arr_ {arr}, size_ {n} {}


template <class T>
T& Span<T>::operator [](size_t const idx) {
  return arr_[idx];
}

template <class T>
T const& Span<T>::operator [](size_t const idx) const {
  return arr_[idx];
}


template <class T>
T* Span<T>::begin() {
  return arr_;
}

template <class T>
T* Span<T>::end() {
  return arr_ + size_;
}

template <class T>
T const* Span<T>::begin() const {
  return arr_;
}

template <class T>
T const* Span<T>::end() const {
  return arr_ + size_;
}


template <class T>
T* Span<T>::data() const {
  return arr_;
}

template <class T>
size_t Span<T>::size() const {
  return size_;
}
