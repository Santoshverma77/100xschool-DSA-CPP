# GitHub Repo Setup Instructions

## Quick Setup (2 minutes)

### Step 1: Create Repository on GitHub
1. Go to: https://github.com/new
2. Repository name: `100xschool-DSA-CPP` (or any name you prefer)
3. Description: `DSA Practice in C++`
4. Choose: **Public** or **Private**
5. **DO NOT** initialize with README, .gitignore, or license (we already have code)
6. Click **"Create repository"**

### Step 2: Copy Repository URL
After creating, copy the repository URL. It will look like:
- HTTPS: `https://github.com/Santoshverma77/100xschool-DSA-CPP.git`
- SSH: `git@github.com:Santoshverma77/100xschool-DSA-CPP.git`

### Step 3: Run Setup Commands
Once repo is created, run these commands in terminal:

```bash
cd "/Users/santoshkumarverma/Desktop/PROGRAM/C++"

# Update remote to new repo (replace URL with your actual repo URL)
git remote set-url origin https://github.com/Santoshverma77/100xschool-DSA-CPP.git

# Push all code
git push -u origin main
```

### Step 4: Verify
Check your GitHub repo - you should see:
- ✅ `helloworld.c++`
- ✅ `helloworld`
- ✅ `setup-github-repo.sh`

## Auto-Push Feature

✅ **Auto-push is already enabled!**

Every time you commit, code will automatically push to GitHub:

```bash
git add .
git commit -m "your message"
# Auto-push happens automatically! 🚀
```

No need to run `git push` manually anymore!
