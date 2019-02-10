
((digest . "119d8688df4f377122eb86ce601f6555") (undo-list (39 . 40) nil (";" . -39) ((marker . 39) . -1) ((marker . 39) . -1) 40 nil (39 . 40) nil (21 . 39) nil (20 . 21) nil ("#" . -20) ((marker . 39) . -1) ((marker . 39) . -1) 21 nil (20 . 21) nil (19 . 20) nil (2 . 19) nil (1 . 2) (t 23646 26670 458741 578000) nil ("#include<stdio.h>

// output
void trace(int A[], int N) {
  int i;
  for (i = 0; i < N; i++) {
    if (i > 0) printf(\" \");
    printf(\"%d\", A[i]);
  }
  printf(\"\\n\");
}

// insertion sort
void insertaion_sort(int A[], int N) {
  int i, j, v;
  for (i = 1; i < N; i++) {
    v = A[i];
    j = i - 1;
    while (j >= 0 && A[j] > v) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;
    trace(A, N);
  }
}

int main() {
  int i, j, N;
  int A[100];

  scanf(\"%d\", &N);
  for (i = 0; i < N; i++) scanf(\"%d\", &A[i]);

  trace(A, N);
  insertaion_sort(A, N);

  return 0;
}
" . 1) ((marker . 39) . -574) ((marker . 19) . -17) ((marker . 20) . -574) ((marker . 39) . -574) ((marker) . -574) 575 (t 23596 24028 734759 165000)))
