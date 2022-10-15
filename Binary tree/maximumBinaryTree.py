def __init__(self,val=0,right=None,left=None):
self.val=val
self.righr=right
self.left=left


def MaxBinaryTree(self,nums:List[int])->TreeNode:
  if not nums:
    return None
  else:
    mx = max(nums)
    i = nums.index(mx)
    // i = ums.index(max(nums))
    
    node = TreeNode(mx) // create root node with maximum value
    
    node.left = self.MaxBinaryTree(nums[:i])
    node.right = self.MaxBinaryTree(nums[i+1:])
    
    return node
    
    
    
