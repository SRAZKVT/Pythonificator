#ifndef CAT
#define CAT_H(x, y) x##y
#define CAT(x, y) CAT_H(x, y)
#endif

#ifdef TYPE
TYPE CAT(add_, TYPE) (TYPE a, TYPE b) {
	return a + b;
}
#undef TYPE
#else
#error TYPE has not been specified for generic function
#endif
