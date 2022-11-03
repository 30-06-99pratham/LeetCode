def pruneTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
  if not root:
    return None
  root.left = pruneTree(root.left)
  root.right = pruneTree(root.right)
  
  if(root.val==0 and root.left == None and root.right == None):
    root = None
    
   return root
