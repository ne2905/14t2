public void saveToFile(String fileName) {
    try (PrintWriter pw = new PrintWriter(fileName)) {
        for (CongNhan cn : list) {
            pw.println(cn.getMa() + ";" +
                       cn.getTen() + ";" +
                       cn.getCa().name() + ";" +
                       cn.getSoGio());
        }
        System.out.println("✅ Ghi file thành công: " + fileName);
    } catch (Exception e) {
        System.err.println("❌ Lỗi ghi file: " + e.getMessage());
    }
}
