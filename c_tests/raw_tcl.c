#include <tcl.h>
#include <tk.h>
#include <stdio.h>

#define TRY(expr) printf("%d", expr)

int main(void)
{
    Tcl_Interp *interp = Tcl_CreateInterp();
    TRY(Tcl_Init(interp));
    TRY(Tcl_Eval(interp, "puts \"Hello, world\""));
    TRY(Tk_Init(interp));
    return 0;
}