generate ssh-key : `ssh-keygen -t ed25519 -C "your_email@example.com"`

display ssh-key : `cat ~/.ssh/id_ed25519.pub`

change Remote URL to SSH : `git remote set-url origin git@github.com:repo_directory`
example : `git remote set-url origin git@github.com:ibrahimrifats/OOP-practice-in-java-cpp-python.git`

now push : `git push -u origin main`
