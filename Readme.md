This benchmark clearly demonstrates the significant performance disparity between transcoding UTF8 to UTF16LE in Notepad++ and using the fast_io library. We distilled the essential code from Notepad++, removed unrelated components, and present the results below:

We conducted two sets of tests, each consisting of three subtests. In the first set, we printed out 1 million "Hello World\n" strings, while in the second set, we printed out 1 million Emoji "😘😗😙😚😋\n" strings.

Test Set 1: Transcoding "Hello World"

Test 1:

Notepad++:
Execution time: 3.345133s
fast_io:
Execution time: 0.0103452s
Notepad++ takes 323.35 times longer than fast_io.
Test 2:

Notepad++:
Execution time: 3.6266059s
fast_io:
Execution time: 0.0103589s
Notepad++ takes 350.10 times longer than fast_io.
Test 3:

Notepad++:
Execution time: 3.6266059s
fast_io:
Execution time: 0.0103589s
Notepad++ takes 350.10 times longer than fast_io.
Test Set 2: Transcoding Emoji "😘😗😙😚😋"

Test 1:

Notepad++:
Execution time: 3.5604456s
fast_io:
Execution time: 0.0305878s
Notepad++ takes 116.40 times longer than fast_io.
Test 2:

Notepad++:
Execution time: 3.479807s
fast_io:
Execution time: 0.0316296s
Notepad++ takes 110.02 times longer than fast_io.
Test 3:

Notepad++:
Execution time: 3.7780573s
fast_io:
Execution time: 0.0309895s
Notepad++ takes 121.91 times longer than fast_io.
In summary, these tests clearly indicate that Notepad++ exhibits extremely slow performance when transcoding UTF8 to UTF16LE, with execution times significantly higher compared to the fast_io library in all test cases.
