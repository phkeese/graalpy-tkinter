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

## TODO
- [ ] Remove hack in tkinter for str
- [ ] Rewrite marshalling code
