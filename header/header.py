from glob import glob
import os

def headermania(path, name, inc):
	folders = glob(path + "/*")
	includes = []
	for i in folders:
		if os.path.isdir(i):
			includes += [headermania(path + "/" + i.split("/")[-1] + "/", i.split("/")[-1], name)]
	file(path + "/" , name, inc + ".h", includes)
	return (name)

def file(path, name, include, includes):
	files = glob(path + "/*.c")
	text = ''
	for file in files:
		with open(file, "r") as f:
			content = f.read().split("\n");
			for i in range(len(content)):
				if content[i].startswith("{"):
					text += f"{content[i-1]};\n"

	with open(f"{path}/{name}.h", "w") as f:
		with open("header.h", "r") as h:
			f.write(h.read().replace("header", name))
		f.write(f"#ifndef {name.upper()}_H\n")
		f.write(f"# define {name.upper()}_H\n\n")
		f.write(f"# include \"../{include}\"\n")
		for i in includes:
			f.write(f"# include \"{i}/{i}.h\"\n")
		f.write("\n" + text);
		if (text != ''):
			f.write("\n")
		f.write(f"#endif")
import sys
headermania(sys.argv[1], sys.argv[2], sys.argv[3])