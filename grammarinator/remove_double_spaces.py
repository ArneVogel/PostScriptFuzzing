#!/bin/python3
import glob, fileinput, sys


for f in glob.glob("output/*.ps"):
    for i, line in enumerate(fileinput.input(f, inplace=1)):
        sys.stdout.write(line.replace("  ", " "))
