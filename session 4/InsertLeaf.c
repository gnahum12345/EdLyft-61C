struct TreeNode {

  int32_t value;
  struct TreeNode *left;
  struct TreeNode *right;
  struct TreeNode *parent;
  uint64_t magic;  //not required to modify this.
}

struct TreeNode * insertNode(struct TreeNode *parent, int val) {
    // TODO! Implement this! 
    TreeNode *child = createNode(val, parent); 
    
    if (*parent) {
      if (parent->left) {
        parent->right = child;  
      } else {
        parent->left = child; 
      }
    }
    return child; 
}

int main() {

  return 0; 
}
