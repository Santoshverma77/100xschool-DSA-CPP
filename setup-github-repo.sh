#!/bin/bash

# Script to create new GitHub repo and push code with auto-push enabled

REPO_NAME="100xschool-DSA-CPP"
REPO_DESCRIPTION="DSA Practice in C++"

echo "🔧 Setting up GitHub repository..."

# Step 1: GitHub CLI login check
if ! gh auth status &>/dev/null; then
    echo "⚠️  GitHub CLI not authenticated. Please run:"
    echo "   gh auth login"
    echo ""
    echo "Then run this script again."
    exit 1
fi

# Step 2: Create GitHub repository
echo "📦 Creating repository: $REPO_NAME"
gh repo create "$REPO_NAME" \
    --description "$REPO_DESCRIPTION" \
    --public \
    --source=. \
    --remote=origin \
    --push 2>&1

if [ $? -eq 0 ]; then
    echo ""
    echo "✅ Repository created successfully!"
    echo "🔗 Repository URL: https://github.com/Santoshverma77/$REPO_NAME"
    echo ""
    echo "🚀 Auto-push is enabled! Every commit will automatically push to GitHub."
    echo ""
    echo "📝 Current files pushed:"
    git ls-files
else
    echo ""
    echo "❌ Failed to create repository. Please check:"
    echo "   1. GitHub CLI is authenticated (gh auth status)"
    echo "   2. Repository name is available"
    echo "   3. You have write permissions"
fi
