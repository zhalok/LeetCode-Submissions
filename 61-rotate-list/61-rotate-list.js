/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */

const getSize = (head) => {
  let size = 0;
  let cur = head;
  while (cur != null) {
    size++;
    cur = cur.next;
  }

  return size;
};

var rotateRight = function (head, k) {
  if (head == null) return head;
  let size = getSize(head);
  let leftSegSize = k % size;

  let head1;
  cur = head;
  let sz = 0;
  while (cur != null) {
    sz++;
    if (sz == size - leftSegSize) {
      head1 = cur.next;
      cur.next = null;
      break;
    }
    cur = cur.next;
  }
  if (head1 == null) return head;
  cur = head1;

  while (cur.next != null) {
    cur = cur.next;
  }
  cur.next = head;
  return head1;

  // console.log(leftSegSize);
};

// console.log(rotateRight([1, 2, 3]));
