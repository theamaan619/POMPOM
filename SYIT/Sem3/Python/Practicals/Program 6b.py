def file_read(fname):
        from itertools import islice
        with open(fname, "w") as myfile:
                myfile.write("SPDT")
                myfile.write("SYBSc.IT")
        txt = open(fname)
        print(txt.read())
file_read('Sample.txt')
