for i in range(0, 5):
	print (f"char\t*va_arg_len{i}(va_list *l, size_t len)")
	print ("{")
	for n in range(1, 13):
		print(f"\tif (len < {i * 12 * 4 + n * 4})")
		print(f"\t\treturn (va_arg(*l, char [{i * 12 * 4 + (n - 1) * 4}]));")
	print(f"\treturn (va_arg_len{i + 1}(l, len))");
	print("}")
	print()