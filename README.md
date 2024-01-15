## Setup

```bash
# Update submodules in this directory
git submodule update --init
```

```bash
# Inside GraalPy root directory
mx build
mx python -m venv <path/to/venv>

# Inside directory above venv
source venv/bin/activate
pip install cffi
python _tkinter/tklib_build.py

# To run code (using venv)
python main.py
```

```bash
# build your own mini tcl/tk app in c
cc -o c_tests/raw c_tests/raw_tcl.c -l tcl8.6 -L /usr/local/Cellar/tcl-tk/8.6.13_5/lib/ -ltk8.6
```

## TODO
- [ ] Remove hack in tkinter for str
- [ ] Rewrite marshalling code
