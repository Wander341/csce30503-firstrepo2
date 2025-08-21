# csce30503-firstrepo2


Instructions for github linux command
student@debStudent:~$ sudo apt update
[sudo] password for student: 
Sorry, try again.
[sudo] password for student: 
Hit:1 http://security.debian.org/debian-security bookworm-security InRelease
Hit:2 http://deb.debian.org/debian bookworm InRelease                          
Hit:3 http://deb.debian.org/debian bookworm-updates InRelease                  
Hit:4 https://dl.google.com/linux/chrome/deb stable InRelease                  
Hit:5 https://packages.microsoft.com/repos/code stable InRelease              
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
3 packages can be upgraded. Run 'apt list --upgradable' to see them.
student@debStudent:~$ sudo apt upgrade-y
E: Invalid operation upgrade-y
student@debStudent:~$ sudo apt upgrade y
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
E: Unable to locate package y
student@debStudent:~$ sudo apt upgrade -y
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
Calculating upgrade... Done
The following packages will be upgraded:
  firefox-esr google-chrome-stable libxslt1.1
3 upgraded, 0 newly installed, 0 to remove and 0 not upgraded.
Need to get 0 B/189 MB of archives.
After this operation, 27.6 kB of additional disk space will be used.
(Reading database ... 154146 files and directories currently installed.)
Preparing to unpack .../google-chrome-stable_139.0.7258.138-1_amd64.deb ...
Unpacking google-chrome-stable (139.0.7258.138-1) over (139.0.7258.127-1) ...
Preparing to unpack .../firefox-esr_128.14.0esr-1~deb12u1_amd64.deb ...
Leaving 'diversion of /usr/bin/firefox to /usr/bin/firefox.real by firefox-esr'
Unpacking firefox-esr (128.14.0esr-1~deb12u1) over (128.13.0esr-1~deb12u1) ...
Preparing to unpack .../libxslt1.1_1.1.35-1+deb12u2_amd64.deb ...
Unpacking libxslt1.1:amd64 (1.1.35-1+deb12u2) over (1.1.35-1+deb12u1) ...
Setting up google-chrome-stable (139.0.7258.138-1) ...
Setting up libxslt1.1:amd64 (1.1.35-1+deb12u2) ...
Setting up firefox-esr (128.14.0esr-1~deb12u1) ...
Processing triggers for hicolor-icon-theme (0.17-2) ...
Processing triggers for gnome-menus (3.36.0-1.1) ...
Processing triggers for libc-bin (2.36-9+deb12u10) ...
Processing triggers for man-db (2.11.2-2) ...
Processing triggers for desktop-file-utils (0.26-1) ...
student@debStudent:~$ sudo apt autoremove -y
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
0 upgraded, 0 newly installed, 0 to remove and 0 not upgraded.
student@debStudent:~$ git config --global user.name "William Anderson" 
student@debStudent:~$ git config --global email "wander00@uafs.edu"
error: key does not contain a section: email
student@debStudent:~$ git config --global user.email "wander00@uafs.edu"
student@debStudent:~$ ssh-keygen -t ed25519 -C "wander00@uafs.edu" 
Generating public/private ed25519 key pair.
Enter file in which to save the key (/home/student/.ssh/id_ed25519): 
Created directory '/home/student/.ssh'.
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in /home/student/.ssh/id_ed25519
Your public key has been saved in /home/student/.ssh/id_ed25519.pub
The key fingerprint is:
SHA256:kdU5Ww56eNuZyHUsXMlkJW72dgQMSsOy85OCmdF56tc wander00@uafs.edu
The key's randomart image is:
+--[ED25519 256]--+
|         .+..+=o+|
|        .+.o=.+=.|
|       .o+.o B+o.|
|      . =.+ +o=oo|
|       =S= = = =+|
|      + o + + +..|
|       . . o     |
|        . . E    |
|         .       |
+----[SHA256]-----+
student@debStudent:~$ ls -a
.              Documents          .mozilla            Public
..             Downloads          Music               .ssh
.bash_history  .eclipse           .node_repl_history  .sudo_as_admin_successful
.bash_logout   eclipse            .p2                 .swt
.bashrc        eclipse-workspace  Pictures            Templates
.cache         .gitconfig         .pki                Videos
.config        .java              .profile            .vscode
Desktop        .local             projects
student@debStudent:~$ cd.ssh
bash: cd.ssh: command not found
student@debStudent:~$ cd .ssh
student@debStudent:~/.ssh$ ls
id_ed25519  id_ed25519.pub
student@debStudent:~/.ssh$ cat id_ed25519.pub 
ssh-ed25519 AAAAC3NzaC1lZDI1NTE5AAAAIO0DjxsJL9o0aOWEAV4ZVR7MQnt2sD1d0YRHT0lF1trc wander00@uafs.edu
student@debStudent:~/.ssh$ 
student@debStudent:~/.ssh$ cd ~/projects/
student@debStudent:~/projects$ pwd
/home/student/projects
student@debStudent:~/projects$ git clone https://github.com/Wander341/csce30503-firstrepo.git
Cloning into 'csce30503-firstrepo'...
warning: You appear to have cloned an empty repository.
student@debStudent:~/projects$ ls
csce30503-firstrepo  home.html  patternDAO  patternDAO.zip  test.php
student@debStudent:~/projects$ ls -l
total 260
drwxr-xr-x 3 student student   4096 Aug 21 10:05 csce30503-firstrepo
-rw-r--r-- 1 student student    224 Jul 31  2024 home.html
drwxr-xr-x 4 student student   4096 Feb 23  2024 patternDAO
-rw-r--r-- 1 student student 248701 Jul 30  2024 patternDAO.zip
-rw-r--r-- 1 student student     23 Jul 30  2024 test.php
student@debStudent:~/projects$ ls -la
total 268
drwxr-xr-x  4 student student   4096 Aug 21 10:05 .
drwxr-xr-x 24 student student   4096 Aug 21 09:59 ..
drwxr-xr-x  3 student student   4096 Aug 21 10:05 csce30503-firstrepo
-rw-r--r--  1 student student    224 Jul 31  2024 home.html
drwxr-xr-x  4 student student   4096 Feb 23  2024 patternDAO
-rw-r--r--  1 student student 248701 Jul 30  2024 patternDAO.zip
-rw-r--r--  1 student student     23 Jul 30  2024 test.php
student@debStudent:~/projects$ cd 
csce30503-firstrepo/ patternDAO/          
student@debStudent:~/projects$ cd csce30503-firstrepo/
student@debStudent:~/projects/csce30503-firstrepo$ ls -la
total 12
drwxr-xr-x 3 student student 4096 Aug 21 10:05 .
drwxr-xr-x 4 student student 4096 Aug 21 10:05 ..
drwxr-xr-x 7 student student 4096 Aug 21 10:05 .git
student@debStudent:~/projects/csce30503-firstrepo$ git log
fatal: your current branch 'main' does not have any commits yet
student@debStudent:~/projects/csce30503-firstrepo$ ls
student@debStudent:~/projects/csce30503-firstrepo$ git log
fatal: your current branch 'main' does not have any commits yet
student@debStudent:~/projects/csce30503-firstrepo$ cd ..
student@debStudent:~/projects$ ls
csce30503-firstrepo  home.html  patternDAO  patternDAO.zip  test.php
student@debStudent:~/projects$ git clone https://github.com/Wander341/csce30503-firstrepo2.git
Cloning into 'csce30503-firstrepo2'...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Receiving objects: 100% (3/3), done.
student@debStudent:~/projects$ ls
csce30503-firstrepo   home.html   patternDAO.zip
csce30503-firstrepo2  patternDAO  test.php
student@debStudent:~/projects$ cd csce30503-firstrepo2
student@debStudent:~/projects/csce30503-firstrepo2$ ls
README.md
student@debStudent:~/projects/csce30503-firstrepo2$ git log
commit e3bc3bdae310e9454f1b8b4a1d4ba18d1a53e6b2 (HEAD -> main, origin/main, origin/HEAD)
Author: Wander341 <wander00@uafs.edu>
Date:   Thu Aug 21 10:10:03 2025 -0500

    Initial commit
student@debStudent:~/projects/csce30503-firstrepo2$ vi hello.c
student@debStudent:~/projects/csce30503-firstrepo2$ gcc hello.c
student@debStudent:~/projects/csce30503-firstrepo2$ vi hello.c
student@debStudent:~/projects/csce30503-firstrepo2$ ls
a.out  hello.c  README.md
student@debStudent:~/projects/csce30503-firstrepo2$ gcc hello.c -o hello
student@debStudent:~/projects/csce30503-firstrepo2$ ls
a.out  hello  hello.c  README.md
student@debStudent:~/projects/csce30503-firstrepo2$ vi hellow.c -o hellow
2 files to edit
student@debStudent:~/projects/csce30503-firstrepo2$ ls
a.out  hello  hello.c  hellow  README.md
student@debStudent:~/projects/csce30503-firstrepo2$ ls -l
total 40
-rwxr-xr-x 1 student student 15960 Aug 21 10:18 a.out
-rwxr-xr-x 1 student student 15960 Aug 21 10:21 hello
-rw-r--r-- 1 student student    72 Aug 21 10:19 hello.c
-rw-r--r-- 1 student student     0 Aug 21 10:22 hellow
-rw-r--r-- 1 student student    22 Aug 21 10:11 README.md
student@debStudent:~/projects/csce30503-firstrepo2$ echo $PATH
/usr/local/bin:/usr/bin:/bin:/usr/local/games:/usr/games
student@debStudent:~/projects/csce30503-firstrepo2$ ./hello
Hello World
student@debStudent:~/projects/csce30503-firstrepo2$ vi hello.c
student@debStudent:~/projects/csce30503-firstrepo2$ gcc hello.c -o hello
student@debStudent:~/projects/csce30503-firstrepo2$ ./hello
Hello World!!!
student@debStudent:~/projects/csce30503-firstrepo2$ ls -l
total 40
-rwxr-xr-x 1 student student 15960 Aug 21 10:18 a.out
-rwxr-xr-x 1 student student 15960 Aug 21 10:29 hello
-rw-r--r-- 1 student student    75 Aug 21 10:28 hello.c
-rw-r--r-- 1 student student     0 Aug 21 10:22 hellow
-rw-r--r-- 1 student student    22 Aug 21 10:11 README.md
student@debStudent:~/projects/csce30503-firstrepo2$ git status
On branch main
Your branch is up to date with 'origin/main'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	a.out
	hello
	hello.c
	hellow

nothing added to commit but untracked files present (use "git add" to track)
student@debStudent:~/projects/csce30503-firstrepo2$ git add *
student@debStudent:~/projects/csce30503-firstrepo2$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   a.out
	new file:   hello
	new file:   hello.c
	new file:   hellow

student@debStudent:~/projects/csce30503-firstrepo2$ git restore --staged a.out
student@debStudent:~/projects/csce30503-firstrepo2$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   hello
	new file:   hello.c
	new file:   hellow

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	a.out

student@debStudent:~/projects/csce30503-firstrepo2$ git restore --staged hellow
student@debStudent:~/projects/csce30503-firstrepo2$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   hello
	new file:   hello.c

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	a.out
	hellow

student@debStudent:~/projects/csce30503-firstrepo2$ git add a.out
student@debStudent:~/projects/csce30503-firstrepo2$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   a.out
	new file:   hello
	new file:   hello.c

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	hellow

student@debStudent:~/projects/csce30503-firstrepo2$ git commit -m"Update"
[main 5e6ab27] Update
 3 files changed, 7 insertions(+)
 create mode 100755 a.out
 create mode 100755 hello
 create mode 100644 hello.c
student@debStudent:~/projects/csce30503-firstrepo2$ git status
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	hellow

nothing added to commit but untracked files present (use "git add" to track)
student@debStudent:~/projects/csce30503-firstrepo2$ git log
commit 5e6ab278c3d6fc8db8e6adf8b7747d75f99a1906 (HEAD -> main)
Author: William Anderson <wander00@uafs.edu>
Date:   Thu Aug 21 10:34:04 2025 -0500

    Update

commit e3bc3bdae310e9454f1b8b4a1d4ba18d1a53e6b2 (origin/main, origin/HEAD)
Author: Wander341 <wander00@uafs.edu>
Date:   Thu Aug 21 10:10:03 2025 -0500

    Initial commit
student@debStudent:~/projects/csce30503-firstrepo2$ git push origin main
Username for 'https://github.com': wander00@uafs.edu
Password for 'https://wander00%40uafs.edu@github.com': 
remote: Invalid username or token. Password authentication is not supported for Git operations.
fatal: Authentication failed for 'https://github.com/Wander341/csce30503-firstrepo2.git/'
student@debStudent:~/projects/csce30503-firstrepo2$ git push origin main
Username for 'https://github.com': 
Password for 'https://github.com': 
remote: No anonymous write access.
fatal: Authentication failed for 'https://github.com/Wander341/csce30503-firstrepo2.git/'
student@debStudent:~/projects/csce30503-firstrepo2$ git push origin
Username for 'https://github.com': 
Password for 'https://github.com': 
remote: No anonymous write access.
fatal: Authentication failed for 'https://github.com/Wander341/csce30503-firstrepo2.git/'
student@debStudent:~/projects/csce30503-firstrepo2$ git log
commit 5e6ab278c3d6fc8db8e6adf8b7747d75f99a1906 (HEAD -> main)
Author: William Anderson <wander00@uafs.edu>
Date:   Thu Aug 21 10:34:04 2025 -0500

    Update

commit e3bc3bdae310e9454f1b8b4a1d4ba18d1a53e6b2 (origin/main, origin/HEAD)
Author: Wander341 <wander00@uafs.edu>
Date:   Thu Aug 21 10:10:03 2025 -0500

    Initial commit
student@debStudent:~/projects/csce30503-firstrepo2$ git push
Username for 'https://github.com': 
Password for 'https://github.com': 
remote: No anonymous write access.
fatal: Authentication failed for 'https://github.com/Wander341/csce30503-firstrepo2.git/'
student@debStudent:~/projects/csce30503-firstrepo2$ cd ..
student@debStudent:~/projects$ git clone ^[[200~git@github.com:Wander341/csce30503-firstrepo2.git~
Cloning into 'csce30503-firstrepo2.git~'...
The authenticity of host 'github.com (140.82.112.4)' can't be established.
ED25519 key fingerprint is SHA256:+DiY3wvvV6TuJJhbpZisF/zLDA0zPMSvHdkr4UvCOqU.
This key is not known by any other names.
Are you sure you want to continue connecting (yes/no/[fingerprint])? n
Please type 'yes', 'no' or the fingerprint: no
Host key verification failed.
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
student@debStudent:~/projects$ git clone git@github.com:Wander341/csce30503-firstrepo2.git
fatal: destination path 'csce30503-firstrepo2' already exists and is not an empty directory.
student@debStudent:~/projects$ git merge git@github.com:Wander341/csce30503-firstrepo2.git
fatal: not a git repository (or any of the parent directories): .git
student@debStudent:~/projects$ cd c
bash: cd: c: No such file or directory
student@debStudent:~/projects$ cd csce30503-firstrepo2
student@debStudent:~/projects/csce30503-firstrepo2$ ls
a.out  hello  hello.c  hellow  README.md
student@debStudent:~/projects/csce30503-firstrepo2$ git push
Username for 'https://github.com': 
Password for 'https://github.com': 
remote: No anonymous write access.
fatal: Authentication failed for 'https://github.com/Wander341/csce30503-firstrepo2.git/'
student@debStudent:~/projects/csce30503-firstrepo2$ git push
Username for 'https://github.com': c
Password for 'https://c@github.com': 
remote: Invalid username or token. Password authentication is not supported for Git operations.
fatal: Authentication failed for 'https://github.com/Wander341/csce30503-firstrepo2.git/'
student@debStudent:~/projects/csce30503-firstrepo2$ git push origin main
Username for 'https://github.com': wander00@uafs.edu
Password for 'https://wander00%40uafs.edu@github.com': 
remote: Invalid username or token. Password authentication is not supported for Git operations.
fatal: Authentication failed for 'https://github.com/Wander341/csce30503-firstrepo2.git/'
student@debStudent:~/projects/csce30503-firstrepo2$ git pull
Already up to date.
student@debStudent:~/projects/csce30503-firstrepo2$ git push
Username for 'https://github.com': 
Password for 'https://github.com': 
remote: No anonymous write access.
fatal: Authentication failed for 'https://github.com/Wander341/csce30503-firstrepo2.git/'
student@debStudent:~/projects/csce30503-firstrepo2$ cd ..
student@debStudent:~/projects$ ls
csce30503-firstrepo  csce30503-firstrepo2  home.html  patternDAO  patternDAO.zip  test.php
student@debStudent:~/projects$ ls
csce30503-firstrepo  csce30503-firstrepo2  home.html  patternDAO  patternDAO.zip  test.php
student@debStudent:~/projects$ rmdir csce30503-firstrepo
rmdir: failed to remove 'csce30503-firstrepo': Directory not empty
student@debStudent:~/projects$ rmdir -r csce30503-firstrepo
rmdir: invalid option -- 'r'
Try 'rmdir --help' for more information.
student@debStudent:~/projects$ rmdir --help
Usage: rmdir [OPTION]... DIRECTORY...
Remove the DIRECTORY(ies), if they are empty.

      --ignore-fail-on-non-empty
                    ignore each failure that is solely because a directory
                    is non-empty

  -p, --parents     remove DIRECTORY and its ancestors; e.g., 'rmdir -p a/b/c'
                    is similar to 'rmdir a/b/c a/b a'

  -v, --verbose     output a diagnostic for every directory processed
      --help        display this help and exit
      --version     output version information and exit

GNU coreutils online help: <https://www.gnu.org/software/coreutils/>
Full documentation <https://www.gnu.org/software/coreutils/rmdir>
or available locally via: info '(coreutils) rmdir invocation'
student@debStudent:~/projects$ rmdir -p csce30503-firstrepo
rmdir: failed to remove 'csce30503-firstrepo': Directory not empty
student@debStudent:~/projects$ rmdir option
rmdir: failed to remove 'option': No such file or directory
student@debStudent:~/projects$ rmdir -option
rmdir: invalid option -- 'o'
Try 'rmdir --help' for more information.
student@debStudent:~/projects$ rm -r csce30503-firstrepo
student@debStudent:~/projects$ rm -r csce30503-firstrepo2/
rm: remove write-protected regular file 'csce30503-firstrepo2/.git/objects/88/aa90c0f132ba9e12213950d31aa3134617d140'? no
rm: cannot remove 'csce30503-firstrepo2/.git/objects/88': Directory not empty
rm: remove write-protected regular file 'csce30503-firstrepo2/.git/objects/pack/pack-49dcf3bea9f8f65e6c5fde74d938bcab2705ed93.pack'? no
rm: remove write-protected regular file 'csce30503-firstrepo2/.git/objects/pack/pack-49dcf3bea9f8f65e6c5fde74d938bcab2705ed93.idx'? cancce
rm: cannot remove 'csce30503-firstrepo2/.git/objects/pack': Directory not empty
rm: remove write-protected regular file 'csce30503-firstrepo2/.git/objects/4c/943fa9b76a5022d2fc938d9b23283a7db8fd37'? ^[
rm: cannot remove 'csce30503-firstrepo2/.git/objects/4c': Directory not empty
rm: remove write-protected regular file 'csce30503-firstrepo2/.git/objects/e6/9de29bb2d1d6434b8b29ae775ad8c2e48c5391'? dsd
rm: cannot remove 'csce30503-firstrepo2/.git/objects/e6': Directory not empty
rm: remove write-protected regular file 'csce30503-firstrepo2/.git/objects/5e/6ab278c3d6fc8db8e6adf8b7747d75f99a1906'? 
rm: cannot remove 'csce30503-firstrepo2/.git/objects/5e': Directory not empty
rm: remove write-protected regular file 'csce30503-firstrepo2/.git/objects/19/058bfab5afd7d9ca8b15da7c988abe0b3d9e94'? :quit
rm: cannot remove 'csce30503-firstrepo2/.git/objects/19': Directory not empty
rm: remove write-protected regular file 'csce30503-firstrepo2/.git/objects/10/2a58abac567fe75547d3153df898ffeda6c2f3'? ld
rm: cannot remove 'csce30503-firstrepo2/.git/objects/10': Directory not empty
student@debStudent:~/projects$ ls
csce30503-firstrepo2  home.html  patternDAO  patternDAO.zip  test.php
student@debStudent:~/projects$ git clone git@github.com:Wander341/csce30503-firstrepo2.git
fatal: destination path 'csce30503-firstrepo2' already exists and is not an empty directory.
student@debStudent:~/projects$ git clone git@github.com:Wander341/csce30503-firstrepo.git
Cloning into 'csce30503-firstrepo'...
The authenticity of host 'github.com (140.82.112.4)' can't be established.
ED25519 key fingerprint is SHA256:+DiY3wvvV6TuJJhbpZisF/zLDA0zPMSvHdkr4UvCOqU.
This key is not known by any other names.
Are you sure you want to continue connecting (yes/no/[fingerprint])? no
Host key verification failed.
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
student@debStudent:~/projects$ git clone git@github.com:Wander341/csce30503-firstrepo.git
Cloning into 'csce30503-firstrepo'...
The authenticity of host 'github.com (140.82.112.4)' can't be established.
ED25519 key fingerprint is SHA256:+DiY3wvvV6TuJJhbpZisF/zLDA0zPMSvHdkr4UvCOqU.
This key is not known by any other names.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added 'github.com' (ED25519) to the list of known hosts.
warning: You appear to have cloned an empty repository.
student@debStudent:~/projects$ ls
csce30503-firstrepo  csce30503-firstrepo2  home.html  patternDAO  patternDAO.zip  test.php
student@debStudent:~/projects$ 
