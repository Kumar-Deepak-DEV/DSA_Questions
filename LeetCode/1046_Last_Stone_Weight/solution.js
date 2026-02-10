/**
 * @param {number[]} stones
 * @return {number}
 */

var lastStoneWeight = function (stones) {
    while (stones.length > 1) {
        let max1 = -1;
        let max2 = -1;
        let idx1 = -1;
        let idx2 = -1;

        // Find the two largest stones
        for (let i = 0; i < stones.length; i++) {
            if (stones[i] > max1) {
                max2 = max1;
                idx2 = idx1;
                max1 = stones[i];
                idx1 = i;
            } else if (stones[i] > max2) {
                max2 = stones[i];
                idx2 = i;
            }
        }

        const diff = max1 - max2;

        // Remove the stones. To avoid index shifting issues, remove the one with the higher index first.
        if (idx1 > idx2) {
            stones.splice(idx1, 1);
            stones.splice(idx2, 1);
        } else {
            stones.splice(idx2, 1);
            stones.splice(idx1, 1);
        }

        // If there's a difference, add the new stone
        if (diff > 0) {
            stones.push(diff);
        }
    }

return stones.length === 0 ? 0 : stones[0];
}

lastStoneWeight([2, 7, 4, 1, 8, 1])