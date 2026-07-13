import subprocess, os
path = r"C:\Users\shreeshrajtripathi\Documents\C Course"
cmd = ['gcc', '-Wall', '-Wextra', '-v', '01_first.c', '-o', '01_first.exe']
proc = subprocess.run(cmd, cwd=path, capture_output=True, text=True)
with open(os.path.join(path, 'gcc_check_output.txt'), 'w', encoding='utf-8') as f:
    f.write(f'returncode={proc.returncode}\n')
    f.write('stdout:\n')
    f.write(proc.stdout)
    f.write('\nstderr:\n')
    f.write(proc.stderr)
    f.write('\nfiles:\n')
    f.write('\n'.join(sorted(os.listdir(path))))
