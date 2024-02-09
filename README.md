# Tkinter for GraalPy

## Setup

To use our module in GraalPy, the `cffi` module is required. It is recommended to install it inside of a virtual environment.
If you have a development version of graalpy, you can use `mx` to execute it and setup a virtual environment:
```bash
mx build
mx python -m venv path/to/venv
```

After activating the environment, simply install `cffi`, build the bindings and you are ready to go:
```bash
source venv/bin/activate
pip install cffi
python _tkinter/tklib_build.py
```

Now, to use our `_tkinter` module, execute code from within the directory where `_tkinter/` resides:
```bash
$ ls
_tkinter/ app.py
$ python app.py
```

## Running Tests

To test the implementation, you can use CPython's test suite.
The setup is a bit brittle and you need to specify top-level directories and start directories to look for modules and test cases in:
```bash
python \
    -m unittest discover \
    -t path/to/cpython/Lib/ \
    -s path/to/cpython/Lib/tkinter/test/test_tkinter/ \
    -p test_file.py
```

As of right now, some tests cause a SegFault when using GraalPy, so filtering by filename is recommended.
You can also use normal CPython if your debug-build of GraalPy is taking too long or cannot be debugged, but you will need to repeat the setup process for a new virtual environment.

## TODO

There are some immediate TODOs to improve on the current state:

- [ ] Use PyPy's 3.8 branch instead of the 2.7 branch as the base for our code. This will probably help with the Unicode errors.
- [ ] Investigate why clicking a button causes a SegFault inside of GraalPy's `cffi` module.
- [ ] Investigate how Python handles Tk on macOS, in particular how it avoids other thread accessing the main window (an exception is thrown for this by the OS)

