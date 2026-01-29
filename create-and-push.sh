#!/bin/bash

# Script to create GitHub repo and push code

echo "🚀 Creating GitHub repository: 100xschool-DSA-CPP"

# Method 1: Using GitHub CLI (if authenticated)
if gh auth status &>/dev/null; then
    echo "✅ GitHub CLI authenticated. Creating repo..."
    gh repo create 100xschool-DSA-CPP \
        --description "DSA Practice in C++" \
        --public \
        --source=. \
        --remote=origin \
        --push
    
    if [ $? -eq 0 ]; then
        echo ""
        echo "✅ Repository created and pushed successfully!"
        echo "🔗 https://github.com/Santoshverma77/100xschool-DSA-CPP"
        exit 0
    fi
fi

# Method 2: Manual setup (if GitHub CLI not working)
echo ""
echo "⚠️  GitHub CLI not authenticated or network issue."
echo ""
echo "📝 Please follow these steps:"
echo ""
echo "1. Go to: https://github.com/new"
echo "2. Repository name: 100xschool-DSA-CPP"
echo "3. Description: DSA Practice in C++"
echo "4. Choose: Public"
echo "5. DO NOT initialize with README, .gitignore, or license"
echo "6. Click 'Create repository'"
echo ""
echo "7. After creating, run these commands:"
echo ""
echo "   cd \"/Users/santoshkumarverma/Desktop/PROGRAM/C++\""
echo "   git remote set-url origin https://github.com/Santoshverma77/100xschool-DSA-CPP.git"
echo "   git push -u origin main"
echo ""
