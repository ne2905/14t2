void sapXepTang() {
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (m[j] < m[min])
                min = j;
        }

        int t;

        t = m[i];
        m[i] = m[min];
        m[min] = t;

        t = v[i];
        v[i] = v[min];
        v[min] = t;

        t = stt[i];
        stt[i] = stt[min];
        stt[min] = t;
    }
}
