def removeLeaf(self, root:Optional[TreeNode], target: Int) -> Optional[TreeNode]:
  //base condition
  if not root:
    return None
  root.left = removeLeaf(root.left,target)
  root.right = removeLeaf(root.right,target)
  
  if not root.right and not root.left and root.val == tatget:
    return None
  
  return root
