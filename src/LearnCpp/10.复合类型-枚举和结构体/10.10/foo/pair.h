#ifndef FOO_H
#define FOO_H
template <typename T> typedef struct Pair {
	T first{};
	T secone{};
};

template <typename T> constexpr T Max(Pair<T> P) {
	return (P.first > P.secone) ? P.first : P.secone;
}
#endif