def RangeSumBST(self, root:Optional[TreeNode],low:int, high: int) ->int:
  if not root:
    return 0
  if root.val > high:
    return self.RangeSumBST(root.left,low,high)
  if root.val < low:
    return self.rangeSumBST(root.right,low,high)
  return root.val + self.RangeSumBST(root.left,low,high) + self.RangeSumBST(root.right,low,high)
  
