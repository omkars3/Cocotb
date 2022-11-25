module axistream(
    input axi_clk,


    input s_axis_tvalid,
    output reg s_axis_tready,
    input s_axis_tlast,
    input [31:0] s_axis_tdata,


    output reg m_axis_tvalid,
    input m_axis_tready,
    output reg m_axis_tlast,
    output reg [31:0] m_axis_tdata
);


    always @ (posedge axi_clk )
    begin
        if (s_axis_tvalid & s_axis_tready )
			begin
            m_axis_tdata<= s_axis_tdata;
            m_axis_tlast <= s_axis_tlast;
			m_axis_tvalid <= 1'b1 ;
			end
		else
			begin
		    m_axis_tdata<= 1'b0;
            m_axis_tlast <= 1'b0;
			m_axis_tvalid <=1'b0;
		
			end
    end
   
	/*
    always @ (posedge ax)
    begin
        //if (s_axis_tvalid & s_axis_tready )
			begin
           
			m_axis_tvalid <= s_axis_tvalid ;
			end
		//else
		//	begin
		//   
		//	m_axis_tvalid <=1'b0;
		//
		//	end
    end 
   */
	
    
	
	/* always @ (s_axis_tvalid)
	begin
	  m_axis_tvalid <=s_axis_tvalid & s_axis_tready;
    end */
	
	initial begin
    $dumpfile("dump.vcd");
    $dumpvars(1, axistream);
  end
  
    
endmodule