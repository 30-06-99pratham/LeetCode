def helper(self,node:TreeNode):
  if not node:
    return None
  else:
    helper(node.right)
    self.sum+=node.val
    node.val=self.sum
    helper(node.left)
    return node

def BstToGst(self,root:TreeNode)->TreeNode:
  self.sum=0
  return self.helper(root)
  
