<Window x:Class="WpfApp_QuanLyBacSi.ReportWindow"
        xmlns="http://schemas.microsoft.com/winfx/2000/xaml/presentation"
        xmlns:x="http://schemas.microsoft.com/winfx/2000/xaml"
        Title="Danh Sách Bác Sĩ Cần Theo Dõi" Height="300" Width="600" WindowStartupLocation="CenterOwner">
    <Grid Margin="10">
        <Grid.RowDefinitions>
            <RowDefinition Height="Auto"/>
            <RowDefinition Height="*"/>
        </Grid.RowDefinitions>

        <TextBlock Text="DANH SÁCH BÁC SĨ CÓ SỐ NGÀY TRỰC &lt; 15" FontSize="15" FontWeight="Bold" Foreground="Red" HorizontalAlignment="Center" Margin="0,0,0,10"/>
        
        <DataGrid x:Name="dgBaoCao" Grid.Row="1" AutoGenerateColumns="False" IsReadOnly="True">
            <DataGrid.Columns>
                <DataGridTextColumn Header="Mã BS" Binding="{Binding MaBS}" Width="1*"/>
                <DataGridTextColumn Header="Họ và Tên" Binding="{Binding HoTen}" Width="2*"/>
                <DataGridTextColumn Header="Số Ngày Trực" Binding="{Binding SoNgayTruc}" Width="1.2*"/>
                <DataGridTextColumn Header="Khoa" Binding="{Binding Khoa}" Width="1.5*"/>
            </DataGrid.Columns>
        </DataGrid>
    </Grid>
</Window>
