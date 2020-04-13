
class Solution {
    public int lastStoneWeight(int[] stones) {
        Arrays.sort(stones);
        List<Integer> s = new ArrayList<Integer>(stones.length);
        for (int i : stones) {
            s.add(i);
        }

        for (int i = s.size() - 1; i > 0; i--) {
            i = breakStones(i, i - 1, s);
        }
        if (s.size() == 0)
            return 0;
        return s.get(0);
    }

    public int breakStones(int a, int b, List<Integer> stones) {
        System.out.println(stones.get(a) + " " + stones.get(b));

        int diff = Math.abs(stones.get(a) - stones.get(b));

        if (diff == 0) {
            stones.remove(a);
            stones.remove(b);
            System.out.println(stones);
            return b;
        } else {
            stones.remove(a);
            stones.remove(b);
            int index = Collections.binarySearch(stones, diff);
            if (index < 0)
                stones.add(-(Collections.binarySearch(stones, diff) + 1), diff);
            else
                stones.add(Collections.binarySearch(stones, diff) + 1, diff);
            System.out.println(stones);
            return a;
        }

    }

}